/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXContainerServices.framework/AXContainerServices
*/


@class AXUIClient;

@interface AXContainerManager : NSObject {

	AXUIClient* _containerServerClient;

}

@property (nonatomic,retain) AXUIClient * containerServerClient;              //@synthesize containerServerClient=_containerServerClient - In the implementation block
+(id)sharedManager;
-(AXUIClient *)containerServerClient;
-(void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContainerServerClient:(AXUIClient *)arg1 ;
@end

