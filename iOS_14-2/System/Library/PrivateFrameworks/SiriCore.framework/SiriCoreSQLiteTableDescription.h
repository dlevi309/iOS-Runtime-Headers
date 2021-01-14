/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _columns;
	NSArray* _constraints;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,copy,readonly) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(NSArray *)constraints;
-(NSArray *)columns;
-(NSString *)name;
-(id)initWithName:(id)arg1 columnsProvider:(/*^block*/id)arg2 constraintsProvider:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3 ;
@end

