/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapSnapshotCreatorRequester.h>

@class NSString;

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester> {

	/*^block*/id handler;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotRequesterWitHandler:(/*^block*/id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4 ;
-(id)handler;
@end

