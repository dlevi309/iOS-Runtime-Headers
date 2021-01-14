/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSSet;

@interface HMIUpdatedFaceprintsResult : HMFObject {

	NSSet* _existingAtOtherVersions;
	NSSet* _createdAtCurrentVersion;
	NSSet* _existingAtCurrentVersion;

}

@property (readonly) NSSet * allAtCurrentVersion; 
@property (readonly) NSSet * existingAtOtherVersions;               //@synthesize existingAtOtherVersions=_existingAtOtherVersions - In the implementation block
@property (readonly) NSSet * createdAtCurrentVersion;               //@synthesize createdAtCurrentVersion=_createdAtCurrentVersion - In the implementation block
@property (readonly) NSSet * existingAtCurrentVersion;              //@synthesize existingAtCurrentVersion=_existingAtCurrentVersion - In the implementation block
-(NSSet *)existingAtCurrentVersion;
-(NSSet *)createdAtCurrentVersion;
-(id)initWithExistingAtCurrentVersion:(id)arg1 createdAtCurrentVersion:(id)arg2 existingAtOtherVersions:(id)arg3 ;
-(NSSet *)allAtCurrentVersion;
-(NSSet *)existingAtOtherVersions;
@end

