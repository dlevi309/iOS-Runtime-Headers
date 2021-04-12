/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString, NSDate;

@interface CLSCollection : CLSObject <CLSRelationable> {

	NSString* _name;
	long long _type;
	NSString* _location;
	NSString* _iconID;
	NSString* _colorName;
	NSDate* _dateClassCreated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * dateClassCreated;              //@synthesize dateClassCreated=_dateClassCreated - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * iconID;                        //@synthesize iconID=_iconID - In the implementation block
@property (nonatomic,copy) NSString * colorName;                     //@synthesize colorName=_colorName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)children;
-(id)dictionaryRepresentation;
-(NSString *)iconID;
-(unsigned long long)childCount;
-(NSString *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(void)setIconID:(NSString *)arg1 ;
-(NSString *)colorName;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_init;
-(void)mergeWithObject:(id)arg1 ;
-(void)setColorName:(NSString *)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 location:(id)arg3 type:(long long)arg4 icon:(id)arg5 ;
-(NSDate *)dateClassCreated;
-(unsigned long long)childCount:(long long)arg1 ;
-(id)children:(long long)arg1 ;
-(void)addCollectionItem:(id)arg1 ;
-(void)removeCollectionItem:(id)arg1 ;
-(void)setDateClassCreated:(NSDate *)arg1 ;
@end

