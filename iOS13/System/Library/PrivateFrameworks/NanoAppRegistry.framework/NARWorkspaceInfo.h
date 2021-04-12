/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSNumber *)sequenceNumber;
-(NSArray *)applications;
-(id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 ;
-(id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 standaloneGlances:(id)arg4 ;
-(NSArray *)standaloneGlances;
@end

