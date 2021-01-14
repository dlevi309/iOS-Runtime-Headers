/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSAbstractHandout.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString, NSArray;

@interface CLSArchivedHandout : CLSAbstractHandout <CLSRelationable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * attachments; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(NSArray *)attachments;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
@end

