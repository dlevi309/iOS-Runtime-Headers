/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)serializedData;
-(id)serializedRepresentation;
-(NSString *)sourceAppIdentifier;
-(NSDate *)importDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2 ;
-(id)initWithSerializedData:(id)arg1 ;
@end

