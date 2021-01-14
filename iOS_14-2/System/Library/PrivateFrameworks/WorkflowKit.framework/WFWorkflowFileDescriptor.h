/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFFileRepresentation, NSString;

@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding> {

	WFFileRepresentation* _file;
	NSString* _name;
	NSString* _sourceAppIdentifier;

}

@property (nonatomic,readonly) WFFileRepresentation * file;                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(WFFileRepresentation *)file;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)sourceAppIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 sourceAppIdentifier:(id)arg3 ;
@end

