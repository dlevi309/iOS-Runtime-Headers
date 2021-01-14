/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/


@class NSString, INFSentenceContext, INFSentenceToken;

@interface INFSentenceTokenWithContext : NSObject {

	BOOL _resolved;
	NSString* _placeholderName;
	INFSentenceContext* _context;
	INFSentenceToken* _originalToken;

}

@property (assign,getter=isResolved,nonatomic) BOOL resolved;               //@synthesize resolved=_resolved - In the implementation block
@property (nonatomic,copy) NSString * placeholderName;                      //@synthesize placeholderName=_placeholderName - In the implementation block
@property (nonatomic,retain) INFSentenceContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) INFSentenceToken * originalToken;              //@synthesize originalToken=_originalToken - In the implementation block
+(id)sentenceResolvedTokenWithOriginalToken:(id)arg1 placeholderName:(id)arg2 ;
-(BOOL)isResolved;
-(INFSentenceContext *)context;
-(void)setResolved:(BOOL)arg1 ;
-(NSString *)placeholderName;
-(void)setContext:(INFSentenceContext *)arg1 ;
-(id)initWithToken:(id)arg1 variableName:(id)arg2 ;
-(void)setPlaceholderName:(NSString *)arg1 ;
-(INFSentenceToken *)originalToken;
-(void)setOriginalToken:(INFSentenceToken *)arg1 ;
@end

