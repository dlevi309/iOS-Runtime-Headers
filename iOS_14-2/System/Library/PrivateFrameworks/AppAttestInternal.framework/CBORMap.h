/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAttestInternal.framework/AppAttestInternal
*/

#import <AppAttestInternal/CBORValue.h>

@class NSMapTable;

@interface CBORMap : CBORValue {

	NSMapTable* m_data;

}
-(id)init;
-(void)write:(id)arg1 ;
-(int)fieldType;
-(void)setKey:(id)arg1 value:(id)arg2 ;
-(id)getSortedKeys;
@end

