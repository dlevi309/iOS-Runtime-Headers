/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying> {

	NSString* _name;
	long long _type;
	NSArray* _columnNames;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
+(id)primaryKeyTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
+(id)uniqueTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
-(NSArray *)columnNames;
-(NSString *)name;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 columnNames:(id)arg3 ;
@end

