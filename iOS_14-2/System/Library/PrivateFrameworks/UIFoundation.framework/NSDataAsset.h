/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CUINamedData, NSString, NSData;

@interface NSDataAsset : NSObject <NSCopying> {

	CUINamedData* _namedData;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * typeIdentifier; 
+(id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2 ;
+(id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)typeIdentifier;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

