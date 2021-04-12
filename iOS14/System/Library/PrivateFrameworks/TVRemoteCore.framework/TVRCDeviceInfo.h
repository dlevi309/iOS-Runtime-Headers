/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface TVRCDeviceInfo : NSObject {

	NSString* _mediaRemoteID;
	NSString* _airplayID;

}

@property (readonly) NSString * mediaRemoteID; 
@property (readonly) NSString * airplayID; 
-(NSString *)mediaRemoteID;
-(id)description;
-(NSString *)airplayID;
-(BOOL)containsID:(id)arg1 ;
-(void)_populateValidIdentifiers:(id)arg1 ;
@end

