/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSBrowser.h>
@class NSDictionary;


@protocol IKJSBrowser <JSExport>
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double interitemSpacing; 
@property (nonatomic,retain) NSDictionary * maskInset; 
@required
-(void)present;
-(double)interitemSpacing;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1;
-(void)setInteritemSpacing:(double)arg1;
-(NSDictionary *)maskInset;
-(void)setMaskInset:(id)arg1;

@end


@class NSDictionary, IKAppBrowserBridge;

@interface IKJSBrowser : IKJSObject <IKJSBrowser> {

	double _cornerRadius;
	double _interitemSpacing;
	NSDictionary* _maskInset;
	IKAppBrowserBridge* _bridge;

}

@property (nonatomic,retain) IKAppBrowserBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                  //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,retain) NSDictionary * maskInset;                 //@synthesize maskInset=_maskInset - In the implementation block
-(void)setBridge:(IKAppBrowserBridge *)arg1 ;
-(IKAppBrowserBridge *)bridge;
-(void)present;
-(double)interitemSpacing;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(void)setInteritemSpacing:(double)arg1 ;
-(NSDictionary *)maskInset;
-(void)setMaskInset:(NSDictionary *)arg1 ;
@end

