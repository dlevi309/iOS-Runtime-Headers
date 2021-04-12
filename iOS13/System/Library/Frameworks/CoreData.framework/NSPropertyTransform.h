/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 valueExpression:(id)arg2 ;
-(void)setPrerequisiteTransform:(NSPropertyTransform *)arg1 ;
-(void)setReplaceMissingValueOnly:(BOOL)arg1 ;
-(void)setValueExpression:(NSExpression *)arg1 ;
-(NSExpression *)valueExpression;
-(void)setPropertyName:(NSString *)arg1 ;
-(NSPropertyTransform *)prerequisiteTransform;
-(BOOL)replaceMissingValueOnly;
@end

