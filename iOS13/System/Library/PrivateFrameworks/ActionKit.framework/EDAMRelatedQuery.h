/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMNoteFilter;

@interface EDAMRelatedQuery : FATObject {

	NSString* _noteGuid;
	NSString* _plainText;
	EDAMNoteFilter* _filter;
	NSString* _referenceUri;
	NSString* _context;
	NSString* _cacheKey;

}

@property (nonatomic,retain) NSString * noteGuid;                  //@synthesize noteGuid=_noteGuid - In the implementation block
@property (nonatomic,retain) NSString * plainText;                 //@synthesize plainText=_plainText - In the implementation block
@property (nonatomic,retain) EDAMNoteFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSString * referenceUri;              //@synthesize referenceUri=_referenceUri - In the implementation block
@property (nonatomic,retain) NSString * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                  //@synthesize cacheKey=_cacheKey - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)context;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(void)setFilter:(EDAMNoteFilter *)arg1 ;
-(EDAMNoteFilter *)filter;
-(NSString *)plainText;
-(NSString *)noteGuid;
-(void)setNoteGuid:(NSString *)arg1 ;
-(void)setPlainText:(NSString *)arg1 ;
-(NSString *)referenceUri;
-(void)setReferenceUri:(NSString *)arg1 ;
@end

