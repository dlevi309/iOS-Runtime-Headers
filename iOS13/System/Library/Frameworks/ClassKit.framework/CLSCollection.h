/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(id)children;
-(NSString *)iconID;
-(void)setIconID:(NSString *)arg1 ;
-(NSString *)colorName;
-(void)setColorName:(NSString *)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 location:(id)arg3 type:(long long)arg4 icon:(id)arg5 ;
-(NSDate *)dateClassCreated;
-(id)initWithCollectionName:(id)arg1 location:(id)arg2 type:(long long)arg3 icon:(id)arg4 ;
-(unsigned long long)childCount:(long long)arg1 ;
-(unsigned long long)childCount;
-(id)children:(long long)arg1 ;
-(void)addCollectionItem:(id)arg1 ;
-(void)removeCollectionItem:(id)arg1 ;
-(void)setDateClassCreated:(NSDate *)arg1 ;
@end

