/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSURL;

@interface UIWebClipIcon : NSObject {

	BOOL _precomposed;
	BOOL _siteWide;
	CGSize _bestSize;
	NSURL* _url;

}

@property (assign,getter=isPrecomposed,nonatomic) BOOL precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
@property (assign,getter=isSiteWide,nonatomic) BOOL siteWide;                    //@synthesize siteWide=_siteWide - In the implementation block
@property (assign,nonatomic) CGSize bestSize;                                    //@synthesize bestSize=_bestSize - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isSiteWide;
-(CGSize)bestSize;
-(BOOL)isPrecomposed;
-(long long)compare:(id)arg1 preferringDeviceIconSizes:(BOOL)arg2 ;
-(void)setPrecomposed:(BOOL)arg1 ;
-(void)setSiteWide:(BOOL)arg1 ;
-(void)setBestSize:(CGSize)arg1 ;
@end

