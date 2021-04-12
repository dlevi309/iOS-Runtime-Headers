/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject {

	NSDictionary* _attributes;
	NSDictionary* _unknownAttributes;

}
-(id)dataForKey:(id)arg1 ;
-(BOOL)getUInt64:(unsigned long long*)arg1 forKey:(id)arg2 ;
-(BOOL)getInt32:(int*)arg1 forKey:(id)arg2 ;
-(id)description;
-(BOOL)getUInt16:(unsigned short*)arg1 forKey:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 unknownAttributes:(id)arg2 ;
-(id)UUIDStringForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)dealloc;
@end

