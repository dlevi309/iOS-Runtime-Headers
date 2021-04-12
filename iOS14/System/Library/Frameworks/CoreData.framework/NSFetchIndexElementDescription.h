/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPropertyDescription, NSString, NSFetchIndexDescription;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	NSPropertyDescription* _property;
	NSString* _propertyName;
	unsigned long long _collationType;
	NSFetchIndexDescription* _indexDescription;
	struct {
		unsigned _ascending : 1;
		unsigned _propertyIsRetained : 1;
		unsigned _unique : 1;
		unsigned _reservedEntityDescription : 29;
	}  _indexElementDescriptionFlags;

}

@property (retain,readonly) NSPropertyDescription * property; 
@property (retain,readonly) NSString * propertyName;                                    //@synthesize propertyName=_propertyName - In the implementation block
@property (assign) unsigned long long collationType; 
@property (getter=isAscending) BOOL ascending; 
@property (nonatomic,readonly) NSFetchIndexDescription * indexDescription; 
+(BOOL)supportsSecureCoding;
-(NSPropertyDescription *)property;
-(id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(id)description;
-(BOOL)isAscending;
-(void)setCollationType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)collationType;
-(NSFetchIndexDescription *)indexDescription;
-(NSString *)propertyName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

