/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)UUID;
-(NSString *)emailAddress;
-(id)initWithEKSharee:(id)arg1 ;
-(BOOL)isCurrentUserForSharing;
-(BOOL)isCurrentUserForScheduling;
@end

