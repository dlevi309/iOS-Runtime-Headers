/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSString, NSMutableDictionary, NSLock;

@interface PROConcretePlugInGroup : NSObject {

	NSMutableArray* plugIns;
	CFUUIDRef uuidRef;
	NSString* name;
	NSString* displayName;
	NSMutableDictionary* protocols;
	NSLock* mutex;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(CFUUIDRef)uuid;
-(id)displayName;
-(id)uuidString;
-(id)plugInsForProtocols:(id)arg1 ;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(BOOL)isEqualToPlugInGroup:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
-(void)removePlugIn:(id)arg1 ;
@end

