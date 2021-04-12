/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSNumber, NSString;

@interface WKWindowFeatures : NSObject <WKObject> {

	ObjectStorage<API::WindowFeatures> _windowFeatures;

}

@property (nonatomic,readonly) NSNumber * _locationBarVisibility; 
@property (nonatomic,readonly) NSNumber * _scrollbarsVisibility; 
@property (nonatomic,readonly) NSNumber * _fullscreenDisplay; 
@property (nonatomic,readonly) NSNumber * _dialogDisplay; 
@property (nonatomic,readonly) NSNumber * menuBarVisibility; 
@property (nonatomic,readonly) NSNumber * statusBarVisibility; 
@property (nonatomic,readonly) NSNumber * toolbarsVisibility; 
@property (nonatomic,readonly) NSNumber * allowsResizing; 
@property (nonatomic,readonly) NSNumber * x; 
@property (nonatomic,readonly) NSNumber * y; 
@property (nonatomic,readonly) NSNumber * width; 
@property (nonatomic,readonly) NSNumber * height; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)x;
-(NSNumber *)width;
-(NSNumber *)y;
-(NSNumber *)height;
-(NSNumber *)allowsResizing;
-(NSNumber *)menuBarVisibility;
-(NSNumber *)statusBarVisibility;
-(NSNumber *)toolbarsVisibility;
-(NSNumber *)_locationBarVisibility;
-(NSNumber *)_scrollbarsVisibility;
-(NSNumber *)_fullscreenDisplay;
-(NSNumber *)_dialogDisplay;
-(Object*)_apiObject;
-(void)dealloc;
@end

