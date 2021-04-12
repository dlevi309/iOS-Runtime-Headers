/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSDictionary;

@interface HMIPersonsModelSummary : HMFObject {

	BOOL _externalLibrary;
	NSUUID* _sourceUUID;
	NSDictionary* _faceCountsByPerson;

}

@property (readonly) NSUUID * sourceUUID;                                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (getter=isExternalLibrary,readonly) BOOL externalLibrary;              //@synthesize externalLibrary=_externalLibrary - In the implementation block
@property (readonly) NSDictionary * faceCountsByPerson;                          //@synthesize faceCountsByPerson=_faceCountsByPerson - In the implementation block
-(NSUUID *)sourceUUID;
-(id)initWithSourceUUID:(id)arg1 externalLibrary:(BOOL)arg2 faceCountsByPerson:(id)arg3 ;
-(BOOL)isExternalLibrary;
-(NSDictionary *)faceCountsByPerson;
@end

