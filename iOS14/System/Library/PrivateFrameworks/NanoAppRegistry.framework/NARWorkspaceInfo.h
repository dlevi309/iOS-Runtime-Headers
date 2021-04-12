/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID, NSNumber;

@interface NARWorkspaceInfo : NSObject <NSSecureCoding> {

	NSArray* _applications;
	NSUUID* _UUID;
	NSNumber* _sequenceNumber;
	NSArray* _standaloneGlances;

}

@property (nonatomic,readonly) NSArray * applications;                   //@synthesize applications=_applications - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSNumber * sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneGlances;              //@synthesize standaloneGlances=_standaloneGlances - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)sequenceNumber;
-(NSArray *)applications;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 ;
-(id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 standaloneGlances:(id)arg4 ;
-(NSArray *)standaloneGlances;
@end

