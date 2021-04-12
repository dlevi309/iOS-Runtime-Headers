/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSCarPlayApplicationIcon.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon> {

	NSData* _iconImageData;
	double _iconImageScale;
	NSString* _localizedDisplayName;

}

@property (nonatomic,retain) NSData * iconImageData;                       //@synthesize iconImageData=_iconImageData - In the implementation block
@property (assign,nonatomic) double iconImageScale;                        //@synthesize iconImageScale=_iconImageScale - In the implementation block
@property (nonatomic,retain) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedDisplayName;
-(NSData *)iconImageData;
-(void)setIconImageData:(NSData *)arg1 ;
-(double)iconImageScale;
-(void)setIconImageScale:(double)arg1 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
@end

