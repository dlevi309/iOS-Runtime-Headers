/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unprepare;
-(id)initWithLabel:(id)arg1 database:(sqlite3Ref)arg2 ;
-(void)bindElements:(const long long*)arg1 numberOfElements:(unsigned long long)arg2 ;
-(void)prepareForNumberOfElements:(unsigned long long)arg1 ;
-(void)_unprepare;
-(long long*)elementBuffer;
-(void)unbind;
-(void)bindElements:(CFSetRef)arg1 ;
-(void)_prepareForNumberOfElements:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)bindElements:(CFArrayRef)arg1 range:(NSRange)arg2 ;
@end

