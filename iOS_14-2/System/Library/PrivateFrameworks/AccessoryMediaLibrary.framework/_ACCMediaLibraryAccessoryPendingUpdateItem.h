/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
*/


@class NSString;

@interface _ACCMediaLibraryAccessoryPendingUpdateItem : NSObject {

	int _type;
	NSString* _libraryUID;
	NSString* _revision;
	id _item;

}

@property (nonatomic,readonly) NSString * libraryUID;              //@synthesize libraryUID=_libraryUID - In the implementation block
@property (nonatomic,readonly) NSString * revision;                //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) int type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id item;                            //@synthesize item=_item - In the implementation block
-(id)item;
-(NSString *)libraryUID;
-(id)description;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)revision;
-(id)initWithLibrary:(id)arg1 revision:(id)arg2 type:(int)arg3 item:(id)arg4 ;
@end

