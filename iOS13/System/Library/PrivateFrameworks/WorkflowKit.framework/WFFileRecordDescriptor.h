/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFRecordDescriptor.h>

@class WFFileRepresentation, NSString;

@interface WFFileRecordDescriptor : WFRecordDescriptor {

	WFFileRepresentation* _file;
	NSString* _name;
	NSString* _sourceAppIdentifier;

}

@property (nonatomic,readonly) WFFileRepresentation * file;                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFFileRepresentation *)file;
-(NSString *)sourceAppIdentifier;
-(id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3 sourceAppIdentifier:(id)arg4 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3 ;
@end

