/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/MFReader.h>

@class WMFPlayer, NSString;

@interface WMFReader : NSObject <MFReader> {

	int m_recordsRead;
	WMFPlayer* m_player;
	unsigned m_length;
	const char* m_pBuffer;
	unsigned m_cursor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)play:(id)arg1 ;
-(id)initWithWMFPlayer:(id)arg1 ;
-(int)playHeaders;
-(int)playRecord;
-(int)checkBytesAvailable:(unsigned)arg1 ;
-(int)moveDataCursor:(unsigned)arg1 ;
@end

