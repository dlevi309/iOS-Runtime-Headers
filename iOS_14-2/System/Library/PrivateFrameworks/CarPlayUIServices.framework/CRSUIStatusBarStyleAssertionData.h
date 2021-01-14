/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/


@class NSString;

@interface CRSUIStatusBarStyleAssertionData : NSObject {

	BOOL _siriPresentation;
	NSString* _identifier;
	long long _interfaceStyle;
	long long _contrast;

}

@property (nonatomic,retain) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                                     //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,nonatomic) long long contrast;                                           //@synthesize contrast=_contrast - In the implementation block
@property (assign,getter=isSiriPresentation,nonatomic) BOOL siriPresentation;              //@synthesize siriPresentation=_siriPresentation - In the implementation block
-(void)setInterfaceStyle:(long long)arg1 ;
-(void)setContrast:(long long)arg1 ;
-(long long)contrast;
-(long long)interfaceStyle;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSiriPresentation:(BOOL)arg1 ;
-(BOOL)isSiriPresentation;
@end

