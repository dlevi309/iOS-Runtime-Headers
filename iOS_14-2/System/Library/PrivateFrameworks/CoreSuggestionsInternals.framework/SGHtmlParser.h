/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableArray, NSArray, NSString, NSMutableData, NSMutableIndexSet, NSHashTable, NSIndexSet;

@interface SGHtmlParser : NSObject {

	const char* _chunkStart;
	unsigned long long _chunkLength;
	NSMutableArray* _mutablePlainTextLines;
	NSArray* _plainTextLines;
	opaque_pthread_mutex_t _plainTextContentLock;
	NSString* _plainTextContent;
	unsigned long long _plainTextLinesTotalLength;
	NSMutableArray* _plainTextLineToHTMLOffset;
	BOOL _currentLineIsCollapsed;
	NSMutableData* _currentLineData;
	NSString* _currentLineString;
	xmlParserCtxt* _parserContext;
	BOOL _renderingSuspended;
	BOOL _preBlockDepth;
	NSMutableIndexSet* _quotedRegions;
	NSMutableIndexSet* _tabularRegions;
	NSMutableIndexSet* _sigHtmlBlockRegions;
	unsigned long long _bytesConsumedInPreviousPasses;
	unsigned long long _depth;
	NSMutableIndexSet* _depthsWithActiveRegions;
	NSHashTable* _activeRegions;
	NSMutableArray* _activeRegionStartPositionStack;
	NSMutableArray* _activeRegionIndexSetStack;
	unsigned long long _quoteToEndFromPosition;

}

@property (nonatomic,readonly) NSArray * textLines; 
@property (nonatomic,readonly) NSString * textContent; 
@property (nonatomic,readonly) NSIndexSet * quotedRegions; 
@property (nonatomic,readonly) NSIndexSet * tabularRegions; 
@property (nonatomic,readonly) NSIndexSet * signatureRegions; 
-(id)initWithString:(id)arg1 ;
-(NSArray *)textLines;
-(NSString *)textContent;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(void)dealloc;
-(NSIndexSet *)quotedRegions;
-(id)initWithUTF8DataEnumerator:(id)arg1 ;
-(NSIndexSet *)tabularRegions;
-(NSIndexSet *)signatureRegions;
@end

