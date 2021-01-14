/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
*/


@class NSString, ACCMediaLibraryUpdateLibraryInfo;

@interface ACCMediaLibraryInfo : NSObject {

	BOOL _state[2];
	BOOL _stateInit[2];
	NSString* _libraryUID;
	ACCMediaLibraryUpdateLibraryInfo* _info;

}

@property (nonatomic,readonly) NSString * libraryUID;                                //@synthesize libraryUID=_libraryUID - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryUpdateLibraryInfo * info;              //@synthesize info=_info - In the implementation block
-(ACCMediaLibraryUpdateLibraryInfo *)info;
-(BOOL)getState:(int)arg1 ;
-(NSString *)libraryUID;
-(id)description;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)setState:(int)arg1 value:(BOOL)arg2 ;
@end

