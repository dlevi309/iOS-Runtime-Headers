/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCoreSQLiteIndex.h>

@class NSString, NSArray;

@interface _SiriCoreSQLiteIndexInfo : NSObject <SiriCoreSQLiteIndex> {

	NSString* _name;
	NSArray* _columns;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)columns;
-(NSString *)name;
-(id)initWithName:(id)arg1 columns:(id)arg2 ;
@end

