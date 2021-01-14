/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)cacheKey;
-(void)setFilter:(EDAMNoteFilter *)arg1 ;
-(EDAMNoteFilter *)filter;
-(NSString *)context;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(NSString *)plainText;
-(NSString *)noteGuid;
-(void)setNoteGuid:(NSString *)arg1 ;
-(void)setPlainText:(NSString *)arg1 ;
-(NSString *)referenceUri;
-(void)setReferenceUri:(NSString *)arg1 ;
@end

