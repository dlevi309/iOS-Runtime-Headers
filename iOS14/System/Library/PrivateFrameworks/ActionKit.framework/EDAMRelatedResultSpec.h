/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet;

@interface EDAMRelatedResultSpec : FATObject {

	NSNumber* _maxNotes;
	NSNumber* _maxNotebooks;
	NSNumber* _maxTags;
	NSNumber* _writableNotebooksOnly;
	NSNumber* _includeContainingNotebooks;
	NSNumber* _includeDebugInfo;
	NSNumber* _maxExperts;
	NSNumber* _maxRelatedContent;
	NSSet* _relatedContentTypes;

}

@property (nonatomic,retain) NSNumber * maxNotes;                                //@synthesize maxNotes=_maxNotes - In the implementation block
@property (nonatomic,retain) NSNumber * maxNotebooks;                            //@synthesize maxNotebooks=_maxNotebooks - In the implementation block
@property (nonatomic,retain) NSNumber * maxTags;                                 //@synthesize maxTags=_maxTags - In the implementation block
@property (nonatomic,retain) NSNumber * writableNotebooksOnly;                   //@synthesize writableNotebooksOnly=_writableNotebooksOnly - In the implementation block
@property (nonatomic,retain) NSNumber * includeContainingNotebooks;              //@synthesize includeContainingNotebooks=_includeContainingNotebooks - In the implementation block
@property (nonatomic,retain) NSNumber * includeDebugInfo;                        //@synthesize includeDebugInfo=_includeDebugInfo - In the implementation block
@property (nonatomic,retain) NSNumber * maxExperts;                              //@synthesize maxExperts=_maxExperts - In the implementation block
@property (nonatomic,retain) NSNumber * maxRelatedContent;                       //@synthesize maxRelatedContent=_maxRelatedContent - In the implementation block
@property (nonatomic,retain) NSSet * relatedContentTypes;                        //@synthesize relatedContentTypes=_relatedContentTypes - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)maxTags;
-(NSNumber *)maxNotes;
-(void)setMaxNotes:(NSNumber *)arg1 ;
-(NSNumber *)maxNotebooks;
-(void)setMaxNotebooks:(NSNumber *)arg1 ;
-(void)setMaxTags:(NSNumber *)arg1 ;
-(NSNumber *)writableNotebooksOnly;
-(void)setWritableNotebooksOnly:(NSNumber *)arg1 ;
-(NSNumber *)includeContainingNotebooks;
-(void)setIncludeContainingNotebooks:(NSNumber *)arg1 ;
-(NSNumber *)includeDebugInfo;
-(void)setIncludeDebugInfo:(NSNumber *)arg1 ;
-(NSNumber *)maxExperts;
-(void)setMaxExperts:(NSNumber *)arg1 ;
-(NSNumber *)maxRelatedContent;
-(void)setMaxRelatedContent:(NSNumber *)arg1 ;
-(NSSet *)relatedContentTypes;
-(void)setRelatedContentTypes:(NSSet *)arg1 ;
@end

