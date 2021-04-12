/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSString, CHMutableTokenizedTextResult;

@interface CHResultWithContext : NSObject {

	int _contentType;
	NSString* _leftContext;
	CHMutableTokenizedTextResult* _result;

}

@property (nonatomic,retain) NSString * leftContext;                             //@synthesize leftContext=_leftContext - In the implementation block
@property (assign) int contentType;                                              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) CHMutableTokenizedTextResult * result;              //@synthesize result=_result - In the implementation block
-(void)setResult:(CHMutableTokenizedTextResult *)arg1 ;
-(int)contentType;
-(CHMutableTokenizedTextResult *)result;
-(void)setContentType:(int)arg1 ;
-(void)dealloc;
-(void)setLeftContext:(NSString *)arg1 ;
-(NSString *)leftContext;
-(id)initWithResult:(id)arg1 leftContext:(id)arg2 contentType:(int)arg3 ;
@end

