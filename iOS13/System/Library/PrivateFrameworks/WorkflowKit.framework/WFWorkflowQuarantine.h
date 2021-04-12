/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface WFWorkflowQuarantine : NSObject <NSCopying> {

	NSString* _sourceAppIdentifier;
	NSDate* _importDate;

}

@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * importDate;                              //@synthesize importDate=_importDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(NSString *)sourceAppIdentifier;
-(id)serializedData;
-(NSDate *)importDate;
-(id)initWithSerializedData:(id)arg1 ;
-(id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2 ;
@end

