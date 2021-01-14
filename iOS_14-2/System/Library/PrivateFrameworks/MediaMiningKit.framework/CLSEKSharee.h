/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CLSEKSharee : NSObject <NSCoding> {

	BOOL _isCurrentUserForSharing;
	BOOL _isCurrentUserForScheduling;
	NSString* _emailAddress;
	NSString* _name;
	NSString* _UUID;

}

@property (readonly) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isCurrentUserForSharing;                 //@synthesize isCurrentUserForSharing=_isCurrentUserForSharing - In the implementation block
@property (readonly) BOOL isCurrentUserForScheduling;              //@synthesize isCurrentUserForScheduling=_isCurrentUserForScheduling - In the implementation block
-(NSString *)UUID;
-(NSString *)emailAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isCurrentUserForSharing;
-(BOOL)isCurrentUserForScheduling;
-(id)initWithEKSharee:(id)arg1 ;
@end

