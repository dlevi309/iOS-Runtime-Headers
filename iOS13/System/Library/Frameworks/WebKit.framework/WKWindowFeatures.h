/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)x;
-(NSNumber *)y;
-(Object*)_apiObject;
-(NSNumber *)menuBarVisibility;
-(NSNumber *)statusBarVisibility;
-(NSNumber *)toolbarsVisibility;
-(NSNumber *)allowsResizing;
-(NSNumber *)_locationBarVisibility;
-(NSNumber *)_scrollbarsVisibility;
-(NSNumber *)_fullscreenDisplay;
-(NSNumber *)_dialogDisplay;
@end

