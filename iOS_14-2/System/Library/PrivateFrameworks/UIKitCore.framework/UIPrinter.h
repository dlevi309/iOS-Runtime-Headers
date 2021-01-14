/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSURL, NSString;

@interface UIPrinter : NSObject {

	id _printerInfo;
	NSURL* URL;

}

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) NSString * displayLocation; 
@property (readonly) long long supportedJobTypes; 
@property (copy,readonly) NSString * makeAndModel; 
@property (readonly) BOOL supportsColor; 
@property (readonly) BOOL supportsDuplex; 
+(id)printerWithURL:(id)arg1 ;
-(id)init;
-(id)_initWithPrinter:(id)arg1 ;
-(void)contactPrinter:(/*^block*/id)arg1 ;
-(id)_internalPrinter;
-(NSString *)displayLocation;
-(long long)supportedJobTypes;
-(BOOL)supportsColor;
-(BOOL)supportsDuplex;
-(NSURL *)URL;
-(id)_initWithURL:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)makeAndModel;
@end

