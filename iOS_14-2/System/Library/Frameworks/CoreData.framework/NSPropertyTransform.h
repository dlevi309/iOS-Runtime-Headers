/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSExpression, NSString;

@interface NSPropertyTransform : NSObject <NSSecureCoding> {

	NSExpression* _valueExpression;
	NSString* _propertyName;
	NSPropertyTransform* _prerequisiteTransform;
	BOOL _replaceMissingValueOnly;

}

@property (nonatomic,retain) NSString * propertyName;                                  //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,retain) NSExpression * valueExpression;                           //@synthesize valueExpression=_valueExpression - In the implementation block
@property (nonatomic,retain) NSPropertyTransform * prerequisiteTransform;              //@synthesize prerequisiteTransform=_prerequisiteTransform - In the implementation block
@property (assign) BOOL replaceMissingValueOnly;                                       //@synthesize replaceMissingValueOnly=_replaceMissingValueOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPropertyName:(NSString *)arg1 ;
-(NSPropertyTransform *)prerequisiteTransform;
-(BOOL)replaceMissingValueOnly;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueExpression:(NSExpression *)arg1 ;
-(void)setPrerequisiteTransform:(NSPropertyTransform *)arg1 ;
-(id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2 ;
-(void)setReplaceMissingValueOnly:(BOOL)arg1 ;
-(NSExpression *)valueExpression;
-(NSString *)propertyName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

