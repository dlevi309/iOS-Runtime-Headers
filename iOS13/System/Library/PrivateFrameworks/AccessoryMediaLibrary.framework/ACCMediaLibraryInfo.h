/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(ACCMediaLibraryUpdateLibraryInfo *)info;
-(id)initWithInfo:(id)arg1 ;
-(NSString *)libraryUID;
-(BOOL)getState:(int)arg1 ;
-(BOOL)setState:(int)arg1 value:(BOOL)arg2 ;
@end

