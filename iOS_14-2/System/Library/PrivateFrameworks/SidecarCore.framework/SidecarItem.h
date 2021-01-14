/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/


@class NSData, NSString;

@interface SidecarItem : NSObject {

	NSData* _data;
	NSString* _type;

}

@property (copy,readonly) id objectValue; 
@property (readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (readonly) NSString * type;                  //@synthesize type=_type - In the implementation block
-(id)objectValue;
-(BOOL)conformsToType:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(NSData *)data;
-(NSString *)type;
-(id)initWithData:(id)arg1 type:(id)arg2 ;
-(id)initWithObject:(id)arg1 type:(id)arg2 ;
@end

