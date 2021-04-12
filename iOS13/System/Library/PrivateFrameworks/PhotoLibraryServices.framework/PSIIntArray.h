/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIIntArray : NSObject {

	sqlite3_intarrayRef _elementArray;
	long long _staticElementBuffer[256];
	long long* _elementBuffer;
	unsigned long long _elementBufferSize;
	BOOL _freeOnUnprepare;

}

@property (nonatomic,readonly) long long* elementBuffer; 
-(void)dealloc;
-(id)initWithLabel:(id)arg1 database:(sqlite3Ref)arg2 ;
-(long long*)elementBuffer;
-(void)prepareForNumberOfElements:(unsigned long long)arg1 ;
-(void)_prepareForNumberOfElements:(unsigned long long)arg1 ;
-(void)unprepare;
-(void)_unprepare;
-(void)bindElements:(CFSetRef)arg1 ;
-(void)bindElements:(CFArrayRef)arg1 range:(NSRange)arg2 ;
-(void)bindElements:(const long long*)arg1 numberOfElements:(unsigned long long)arg2 ;
-(void)unbind;
@end

