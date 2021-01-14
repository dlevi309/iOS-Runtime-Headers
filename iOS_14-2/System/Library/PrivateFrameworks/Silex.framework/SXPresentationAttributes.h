/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTestingConditionEnabled:(BOOL)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setEnableViewportDebugging:(BOOL)arg1 ;
-(NSString *)contentSizeCategory;
-(double)contentScaleFactor;
-(BOOL)fadeInComponents;
-(unsigned long long)presentationMode;
-(CGSize)canvasSize;
-(unsigned long long)hash;
-(BOOL)enableViewportDebugging;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)testingConditionEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFadeInComponents:(BOOL)arg1 ;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(void)setCanvasSize:(CGSize)arg1 ;
@end

