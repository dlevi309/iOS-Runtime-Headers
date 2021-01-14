/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)bestSize;
-(void)setSiteWide:(BOOL)arg1 ;
-(BOOL)isSiteWide;
-(NSURL *)url;
-(void)setBestSize:(CGSize)arg1 ;
-(long long)compare:(id)arg1 preferringDeviceIconSizes:(BOOL)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPrecomposed:(BOOL)arg1 ;
-(BOOL)isPrecomposed;
@end

