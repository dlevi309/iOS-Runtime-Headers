/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(NSString *)type;
-(NSData *)data;
-(BOOL)conformsToType:(id)arg1 ;
-(id)objectValue;
-(id)initWithData:(id)arg1 type:(id)arg2 ;
-(id)initWithObject:(id)arg1 type:(id)arg2 ;
@end

