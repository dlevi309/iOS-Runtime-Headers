/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHStrokeIdentifier.h>

@class NSUUID, NSString;

@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier> {

	double _tStart;
	double _tEnd;
	NSUUID* _strokeUUID;
	PKStrokeID _version;

}

@property (nonatomic,readonly) double tStart;                       //@synthesize tStart=_tStart - In the implementation block
@property (nonatomic,readonly) double tEnd;                         //@synthesize tEnd=_tEnd - In the implementation block
@property (nonatomic,readonly) NSUUID * strokeUUID;                 //@synthesize strokeUUID=_strokeUUID - In the implementation block
@property (nonatomic,readonly) PKStrokeID version;                  //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKStrokeID)version;
-(id)initWithUUID:(id)arg1 version:(PKStrokeID)arg2 tStart:(double)arg3 tEnd:(double)arg4 ;
-(double)tStart;
-(double)tEnd;
-(NSUUID *)strokeUUID;
@end

