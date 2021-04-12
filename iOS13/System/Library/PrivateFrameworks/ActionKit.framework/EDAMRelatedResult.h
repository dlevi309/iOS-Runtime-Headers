/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSArray, NSString, NSNumber;

@interface EDAMRelatedResult : FATObject {

	NSArray* _notes;
	NSArray* _notebooks;
	NSArray* _tags;
	NSArray* _containingNotebooks;
	NSString* _debugInfo;
	NSArray* _experts;
	NSArray* _relatedContent;
	NSString* _cacheKey;
	NSNumber* _cacheExpires;

}

@property (nonatomic,retain) NSArray * notes;                            //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSArray * notebooks;                        //@synthesize notebooks=_notebooks - In the implementation block
@property (nonatomic,retain) NSArray * tags;                             //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSArray * containingNotebooks;              //@synthesize containingNotebooks=_containingNotebooks - In the implementation block
@property (nonatomic,retain) NSString * debugInfo;                       //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,retain) NSArray * experts;                          //@synthesize experts=_experts - In the implementation block
@property (nonatomic,retain) NSArray * relatedContent;                   //@synthesize relatedContent=_relatedContent - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                        //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,retain) NSNumber * cacheExpires;                    //@synthesize cacheExpires=_cacheExpires - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)tags;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(NSString *)debugInfo;
-(NSArray *)notes;
-(void)setNotes:(NSArray *)arg1 ;
-(NSArray *)relatedContent;
-(void)setDebugInfo:(NSString *)arg1 ;
-(NSArray *)notebooks;
-(void)setNotebooks:(NSArray *)arg1 ;
-(NSArray *)containingNotebooks;
-(void)setContainingNotebooks:(NSArray *)arg1 ;
-(NSArray *)experts;
-(void)setExperts:(NSArray *)arg1 ;
-(void)setRelatedContent:(NSArray *)arg1 ;
-(NSNumber *)cacheExpires;
-(void)setCacheExpires:(NSNumber *)arg1 ;
@end

