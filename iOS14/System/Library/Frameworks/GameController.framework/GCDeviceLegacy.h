/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class NSArray, NSString;


@protocol GCDeviceLegacy <NSObject>
@property (nonatomic,readonly) NSArray * hidServices; 
@property (assign,getter=areAllHIDDevicesConnected,nonatomic) BOOL allHIDDevicesConnected; 
@property (assign,getter=isPublished,nonatomic) BOOL published; 
@property (nonatomic,readonly) NSString * productCategory; 
@required
-(void)setPublished:(BOOL)arg1;
-(void)handleEvent:(IOHIDEventRef)arg1;
-(BOOL)isPublished;
-(NSString *)productCategory;
-(NSArray *)hidServices;
-(BOOL)areAllHIDDevicesConnected;
-(void)setAllHIDDevicesConnected:(BOOL)arg1;
-(void)addServiceRefsWithDevice:(id)arg1;
-(void)addServiceRef:(id)arg1;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1;
-(void)clearServiceRef;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1;

@end

