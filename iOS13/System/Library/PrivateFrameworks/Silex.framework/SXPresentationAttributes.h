/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSString;

@interface SXPresentationAttributes : NSObject {

	BOOL _fadeInComponents;
	BOOL _enableViewportDebugging;
	BOOL _testingConditionEnabled;
	NSString* _contentSizeCategory;
	unsigned long long _presentationMode;
	double _contentScaleFactor;
	CGSize _canvasSize;

}

@property (assign,nonatomic) CGSize canvasSize;                                //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;                   //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) BOOL fadeInComponents;                            //@synthesize fadeInComponents=_fadeInComponents - In the implementation block
@property (assign,nonatomic) double contentScaleFactor;                        //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL enableViewportDebugging;                     //@synthesize enableViewportDebugging=_enableViewportDebugging - In the implementation block
@property (assign,nonatomic) BOOL testingConditionEnabled;                     //@synthesize testingConditionEnabled=_testingConditionEnabled - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)contentScaleFactor;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setContentScaleFactor:(double)arg1 ;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(unsigned long long)presentationMode;
-(BOOL)testingConditionEnabled;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(void)setEnableViewportDebugging:(BOOL)arg1 ;
-(void)setTestingConditionEnabled:(BOOL)arg1 ;
-(BOOL)fadeInComponents;
-(BOOL)enableViewportDebugging;
-(void)setFadeInComponents:(BOOL)arg1 ;
@end

