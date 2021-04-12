/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(INFSentenceContext *)context;
-(void)setResolved:(BOOL)arg1 ;
-(BOOL)isResolved;
-(void)setContext:(INFSentenceContext *)arg1 ;
-(NSString *)placeholderName;
-(id)initWithToken:(id)arg1 variableName:(id)arg2 ;
-(void)setPlaceholderName:(NSString *)arg1 ;
-(INFSentenceToken *)originalToken;
-(void)setOriginalToken:(INFSentenceToken *)arg1 ;
@end

