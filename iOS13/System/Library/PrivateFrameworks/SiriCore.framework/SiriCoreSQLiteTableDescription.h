/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)constraints;
-(NSArray *)columns;
-(id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3 ;
-(id)initWithName:(id)arg1 columnsProvider:(/*^block*/id)arg2 constraintsProvider:(/*^block*/id)arg3 ;
@end

