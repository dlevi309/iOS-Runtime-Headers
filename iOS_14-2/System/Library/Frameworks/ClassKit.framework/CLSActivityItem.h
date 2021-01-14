/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSActivityItem : CLSObject <CLSRelationable> {

	NSString* _title;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(NSString *)title;
-(BOOL)validateObject:(id*)arg1 ;
@end

