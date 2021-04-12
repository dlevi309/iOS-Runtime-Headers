/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface TVRCDeviceInfo : NSObject {

	NSString* _mediaRemoteID;
	NSString* _airplayID;

}

@property (readonly) NSString * mediaRemoteID; 
@property (readonly) NSString * airplayID; 
-(id)description;
-(NSString *)mediaRemoteID;
-(NSString *)airplayID;
-(BOOL)containsID:(id)arg1 ;
-(void)_populateValidIdentifiers:(id)arg1 ;
@end

