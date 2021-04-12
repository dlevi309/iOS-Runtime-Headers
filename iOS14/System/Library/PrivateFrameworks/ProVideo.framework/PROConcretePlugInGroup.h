/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CFUUIDRef)uuid;
-(id)uuidString;
-(id)name;
-(id)description;
-(unsigned long long)hash;
-(id)displayName;
-(id)plugIns;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)addPlugIn:(id)arg1 ;
-(BOOL)isEqualToPlugInGroup:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
-(void)removePlugIn:(id)arg1 ;
@end

