/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCornerRadius:(double)arg1;
-(void)present;
-(double)cornerRadius;
-(double)interitemSpacing;
-(NSDictionary *)maskInset;
-(void)setInteritemSpacing:(double)arg1;
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
-(void)setCornerRadius:(double)arg1 ;
-(void)present;
-(double)cornerRadius;
-(IKAppBrowserBridge *)bridge;
-(void)setBridge:(IKAppBrowserBridge *)arg1 ;
-(double)interitemSpacing;
-(NSDictionary *)maskInset;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setMaskInset:(NSDictionary *)arg1 ;
@end

